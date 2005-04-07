// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/AnimationPath>
#include <osg/CopyOp>
#include <osg/Matrixd>
#include <osg/Matrixf>
#include <osg/Node>
#include <osg/NodeVisitor>
#include <osg/Object>
#include <osg/Quat>
#include <osg/Vec3d>

TYPE_NAME_ALIAS(std::map< double COMMA  osg::AnimationPath::ControlPoint >, osg::AnimationPath::TimeControlPointMap);

BEGIN_ENUM_REFLECTOR(osg::AnimationPath::LoopMode)
	EnumLabel(osg::AnimationPath::SWING);
	EnumLabel(osg::AnimationPath::LOOP);
	EnumLabel(osg::AnimationPath::NO_LOOPING);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::AnimationPath)
	VirtualBaseType(osg::Object);
	Constructor0();
	ConstructorWithDefaults2(IN, const osg::AnimationPath &, ap, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY);
	Method0(osg::Object *, cloneType);
	Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop);
	Method1(bool, isSameKindAs, IN, const osg::Object *, obj);
	Method0(const char *, libraryName);
	Method0(const char *, className);
	Method2(bool, getMatrix, IN, double, time, IN, osg::Matrixf &, matrix);
	Method2(bool, getMatrix, IN, double, time, IN, osg::Matrixd &, matrix);
	Method2(bool, getInverse, IN, double, time, IN, osg::Matrixf &, matrix);
	Method2(bool, getInverse, IN, double, time, IN, osg::Matrixd &, matrix);
	Method2(bool, getInterpolatedControlPoint, IN, double, time, IN, osg::AnimationPath::ControlPoint &, controlPoint);
	Method2(void, insert, IN, double, time, IN, const osg::AnimationPath::ControlPoint &, controlPoint);
	Method0(double, getFirstTime);
	Method0(double, getLastTime);
	Method0(double, getPeriod);
	Method1(void, setLoopMode, IN, osg::AnimationPath::LoopMode, lm);
	Method0(osg::AnimationPath::LoopMode, getLoopMode);
	Method1(void, setTimeControlPointMap, IN, osg::AnimationPath::TimeControlPointMap &, tcpm);
	Method0(osg::AnimationPath::TimeControlPointMap &, getTimeControlPointMap);
	Method0(const osg::AnimationPath::TimeControlPointMap &, getTimeControlPointMap);
	Method0(bool, empty);
	Method1(void, read, IN, std::istream &, in);
	Method1(void, write, IN, std::ostream &, out);
	ReadOnlyProperty(double, FirstTime);
	ReadOnlyProperty(double, LastTime);
	Property(osg::AnimationPath::LoopMode, LoopMode);
	ReadOnlyProperty(double, Period);
	Property(osg::AnimationPath::TimeControlPointMap &, TimeControlPointMap);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::AnimationPath::ControlPoint)
	Constructor0();
	Constructor1(IN, const osg::Vec3d &, position);
	Constructor2(IN, const osg::Vec3d &, position, IN, const osg::Quat &, rotation);
	Constructor3(IN, const osg::Vec3d &, position, IN, const osg::Quat &, rotation, IN, const osg::Vec3d &, scale);
	Method1(void, setPosition, IN, const osg::Vec3d &, position);
	Method0(const osg::Vec3d &, getPosition);
	Method1(void, setRotation, IN, const osg::Quat &, rotation);
	Method0(const osg::Quat &, getRotation);
	Method1(void, setScale, IN, const osg::Vec3d &, scale);
	Method0(const osg::Vec3d &, getScale);
	Method3(void, interpolate, IN, float, ratio, IN, const osg::AnimationPath::ControlPoint &, first, IN, const osg::AnimationPath::ControlPoint &, second);
	Method1(void, getMatrix, IN, osg::Matrixf &, matrix);
	Method1(void, getMatrix, IN, osg::Matrixd &, matrix);
	Method1(void, getInverse, IN, osg::Matrixf &, matrix);
	Method1(void, getInverse, IN, osg::Matrixd &, matrix);
	Property(const osg::Vec3d &, Position);
	Property(const osg::Quat &, Rotation);
	Property(const osg::Vec3d &, Scale);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::AnimationPathCallback)
	BaseType(osg::NodeCallback);
	Constructor0();
	Constructor2(IN, const osg::AnimationPathCallback &, apc, IN, const osg::CopyOp &, copyop);
	Method0(osg::Object *, cloneType);
	Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop);
	Method1(bool, isSameKindAs, IN, const osg::Object *, obj);
	Method0(const char *, libraryName);
	Method0(const char *, className);
	ConstructorWithDefaults3(IN, osg::AnimationPath *, ap, , IN, double, timeOffset, 0.0, IN, double, timeMultiplier, 1.0);
	Method1(void, setAnimationPath, IN, osg::AnimationPath *, path);
	Method0(osg::AnimationPath *, getAnimationPath);
	Method0(const osg::AnimationPath *, getAnimationPath);
	Method1(void, setPivotPoint, IN, const osg::Vec3d &, pivot);
	Method0(const osg::Vec3d &, getPivotPoint);
	Method1(void, setUseInverseMatrix, IN, bool, useInverseMatrix);
	Method0(bool, getUseInverseMatrix);
	Method1(void, setTimeOffset, IN, double, offset);
	Method0(double, getTimeOffset);
	Method1(void, setTimeMultiplier, IN, double, multiplier);
	Method0(double, getTimeMultiplier);
	Method0(void, reset);
	Method1(void, setPause, IN, bool, pause);
	Method0(bool, getPause);
	Method0(double, getAnimationTime);
	Method1(void, update, IN, osg::Node &, node);
	Property(osg::AnimationPath *, AnimationPath);
	ReadOnlyProperty(double, AnimationTime);
	Property(bool, Pause);
	Property(const osg::Vec3d &, PivotPoint);
	Property(double, TimeMultiplier);
	Property(double, TimeOffset);
	Property(bool, UseInverseMatrix);
END_REFLECTOR

STD_MAP_REFLECTOR(std::map< double COMMA  osg::AnimationPath::ControlPoint >);

