//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/util/concurrent/CycleDetectingLockFactory.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL")
#if ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_RESTRICT
#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL 0
#else
#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_RESTRICT
#if ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadWriteLock_INCLUDE
#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingLock_INCLUDE 1
#endif
#if ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantLock_INCLUDE
#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingLock_INCLUDE 1
#endif
#if ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException_INCLUDE
#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace_INCLUDE 1
#endif
#if ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering_INCLUDE
#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE 1
#endif
#if ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_INCLUDE
#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy_INCLUDE 1
#endif

#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_

@class ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering;
@class IOSClass;
@class JavaUtilConcurrentLocksReentrantLock;
@class JavaUtilConcurrentLocksReentrantReadWriteLock;
@protocol ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy;

@interface ComGoogleCommonUtilConcurrentCycleDetectingLockFactory : NSObject {
 @public
  id<ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy> policy_;
}

#pragma mark Public

+ (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory *)newInstanceWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy:(id<ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy>)policy OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering *)newInstanceWithExplicitOrderingWithIOSClass:(IOSClass *)enumClass
                                                           withComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy:(id<ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy>)policy OBJC_METHOD_FAMILY_NONE;

- (JavaUtilConcurrentLocksReentrantLock *)newReentrantLockWithNSString:(NSString *)lockName OBJC_METHOD_FAMILY_NONE;

- (JavaUtilConcurrentLocksReentrantLock *)newReentrantLockWithNSString:(NSString *)lockName
                                                           withBoolean:(jboolean)fair OBJC_METHOD_FAMILY_NONE;

- (JavaUtilConcurrentLocksReentrantReadWriteLock *)newReentrantReadWriteLockWithNSString:(NSString *)lockName OBJC_METHOD_FAMILY_NONE;

- (JavaUtilConcurrentLocksReentrantReadWriteLock *)newReentrantReadWriteLockWithNSString:(NSString *)lockName
                                                                             withBoolean:(jboolean)fair OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory)

J2OBJC_FIELD_SETTER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory, policy_, id<ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy>)

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentCycleDetectingLockFactory *ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_newInstanceWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy_(id<ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy> policy);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering *ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_newInstanceWithExplicitOrderingWithIOSClass_withComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy_(IOSClass *enumClass, id<ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy> policy);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory)

#endif

#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy_

@class ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException;

@protocol ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy < NSObject, JavaObject >

- (void)handlePotentialDeadlockWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException:(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException *)exception;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy)

#endif

#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_

#define JavaLangEnum_RESTRICT 1
#define JavaLangEnum_INCLUDE 1
#include "java/lang/Enum.h"

typedef NS_ENUM(NSUInteger, ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies) {
  ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_THROW = 0,
  ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_WARN = 1,
  ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_DISABLED = 2,
};

@interface ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum : JavaLangEnum < NSCopying, ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy >

#pragma mark Package-Private

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_values();

+ (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum *)valueOfWithNSString:(NSString *)name;
FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum *ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_valueOfWithNSString_(NSString *name);

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum)

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum *ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_values_[];

#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_THROW ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_values_[ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_THROW]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum, THROW)

#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_WARN ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_values_[ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_WARN]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum, WARN)

#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_DISABLED ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_values_[ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_DISABLED]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum, DISABLED)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum)

#endif

#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_$1Enum_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_$1Enum_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_$1Enum_

#endif

#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_$2Enum_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_$2Enum_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_$2Enum_

#endif

#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_$3Enum_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_$3Enum_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_$3Enum_

#endif

#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering_

@class JavaLangEnum;
@class JavaUtilConcurrentLocksReentrantLock;
@class JavaUtilConcurrentLocksReentrantReadWriteLock;
@protocol ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy;
@protocol JavaUtilMap;

@interface ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering : ComGoogleCommonUtilConcurrentCycleDetectingLockFactory

#pragma mark Public

- (JavaUtilConcurrentLocksReentrantLock *)newReentrantLockWithJavaLangEnum:(JavaLangEnum *)rank OBJC_METHOD_FAMILY_NONE;

- (JavaUtilConcurrentLocksReentrantLock *)newReentrantLockWithJavaLangEnum:(JavaLangEnum *)rank
                                                               withBoolean:(jboolean)fair OBJC_METHOD_FAMILY_NONE;

- (JavaUtilConcurrentLocksReentrantReadWriteLock *)newReentrantReadWriteLockWithJavaLangEnum:(JavaLangEnum *)rank OBJC_METHOD_FAMILY_NONE;

- (JavaUtilConcurrentLocksReentrantReadWriteLock *)newReentrantReadWriteLockWithJavaLangEnum:(JavaLangEnum *)rank
                                                                                 withBoolean:(jboolean)fair OBJC_METHOD_FAMILY_NONE;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy:(id<ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy>)policy
                                                                      withJavaUtilMap:(id<JavaUtilMap>)lockGraphNodes;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering_initWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy_withJavaUtilMap_(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering *self, id<ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy> policy, id<JavaUtilMap> lockGraphNodes);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering *new_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering_initWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy_withJavaUtilMap_(id<ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy> policy, id<JavaUtilMap> lockGraphNodes) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering)

#endif

#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_OrderedLockGraphNodesCreator_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_OrderedLockGraphNodesCreator_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_OrderedLockGraphNodesCreator_

#define ComGoogleCommonBaseFunction_RESTRICT 1
#define ComGoogleCommonBaseFunction_INCLUDE 1
#include "com/google/common/base/Function.h"

@class IOSClass;
@protocol JavaUtilMap;

@interface ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_OrderedLockGraphNodesCreator : NSObject < ComGoogleCommonBaseFunction >

#pragma mark Public

- (id<JavaUtilMap>)applyWithId:(IOSClass *)clazz;

#pragma mark Package-Private

- (instancetype)init;

- (id<JavaUtilMap>)createNodesForWithIOSClass:(IOSClass *)clazz;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_OrderedLockGraphNodesCreator)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_OrderedLockGraphNodesCreator_init(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_OrderedLockGraphNodesCreator *self);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_OrderedLockGraphNodesCreator *new_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_OrderedLockGraphNodesCreator_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_OrderedLockGraphNodesCreator)

#endif

#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace_

#define JavaLangIllegalStateException_RESTRICT 1
#define JavaLangIllegalStateException_INCLUDE 1
#include "java/lang/IllegalStateException.h"

@interface ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace : JavaLangIllegalStateException

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace)

#endif

#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException_

@class ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace;

@interface ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException : ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace

#pragma mark Public

- (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace *)getConflictingStackTrace;

- (NSString *)getMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException)

#endif

#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingLock_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingLock_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingLock_

@class ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode;

@protocol ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingLock < NSObject, JavaObject >

- (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode *)getLockGraphNode;

- (jboolean)isAcquiredByCurrentThread;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingLock)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingLock)

#endif

#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode_

@interface ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode : NSObject

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode)

#endif

#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantLock_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantLock_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantLock_

#define JavaUtilConcurrentLocksReentrantLock_RESTRICT 1
#define JavaUtilConcurrentLocksReentrantLock_INCLUDE 1
#include "java/util/concurrent/locks/ReentrantLock.h"

@class ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode;
@class JavaUtilConcurrentTimeUnitEnum;

@interface ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantLock : JavaUtilConcurrentLocksReentrantLock < ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingLock >

#pragma mark Public

- (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode *)getLockGraphNode;

- (jboolean)isAcquiredByCurrentThread;

- (void)lock;

- (void)lockInterruptibly;

- (jboolean)tryLock;

- (jboolean)tryLockWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (void)unlock;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantLock)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantLock)

#endif

#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadWriteLock_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadWriteLock_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadWriteLock_

#define JavaUtilConcurrentLocksReentrantReadWriteLock_RESTRICT 1
#define JavaUtilConcurrentLocksReentrantReadWriteLock_INCLUDE 1
#include "java/util/concurrent/locks/ReentrantReadWriteLock.h"

@class ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode;
@class JavaUtilConcurrentLocksReentrantReadWriteLock_ReadLock;
@class JavaUtilConcurrentLocksReentrantReadWriteLock_WriteLock;

@interface ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadWriteLock : JavaUtilConcurrentLocksReentrantReadWriteLock < ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingLock >

#pragma mark Public

- (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode *)getLockGraphNode;

- (jboolean)isAcquiredByCurrentThread;

- (JavaUtilConcurrentLocksReentrantReadWriteLock_ReadLock *)readLock;

- (JavaUtilConcurrentLocksReentrantReadWriteLock_WriteLock *)writeLock;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadWriteLock)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadWriteLock)

#endif

#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadLock_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadLock_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadLock_

#endif

#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantWriteLock_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantWriteLock_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantWriteLock_

#endif

#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_$1_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_$1_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_$1_

#endif
#pragma pop_macro("ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL")