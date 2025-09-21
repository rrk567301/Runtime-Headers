@class NSUUID, NSString, HMFMessageDestination, HMFMessageTransport, NSSet, HMFActivity, NSDictionary, HMFFlow, HMFMessageInternal;

@interface HMFMessage : HMFObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly, copy) NSSet *allowedClassesForXPC;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) HMFFlow *flow;
@property (readonly, nonatomic) HMFMessageInternal *internal;
@property (copy, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) HMFMessageDestination *destination;
@property (copy, nonatomic) NSDictionary *messagePayload;
@property (copy, nonatomic) id /* block */ responseHandler;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) double timeout;
@property (readonly, nonatomic) long long qualityOfService;
@property (readonly, nonatomic) NSString *untrustedClientIdentifier;
@property (readonly, weak, nonatomic) HMFMessageTransport *transport;
@property (readonly, nonatomic) HMFActivity *activity;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;
@property (readonly, copy, nonatomic) NSDictionary *headers;

+ (id)shortDescription;
+ (id)messageWithName:(id)a0 messagePayload:(id)a1;
+ (id)activityNameWithMessageName:(id)a0;
+ (id)messageWithMessage:(id)a0 messagePayload:(id)a1;
+ (id)messageWithMessage:(id)a0 messagePayload:(id)a1 responseHandler:(id /* block */)a2;
+ (id)messageWithName:(id)a0 destination:(id)a1 payload:(id)a2;
+ (id)messageWithName:(id)a0 identifier:(id)a1 messagePayload:(id)a2;
+ (id)messageWithName:(id)a0 messagePayload:(id)a1 responseHandler:(id /* block */)a2;
+ (id)messageWithName:(id)a0 qualityOfService:(long long)a1 destination:(id)a2 payload:(id)a3;

- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (id)init;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (char)boolForKey:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)URLForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)numberForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)dataForKey:(id)a0;
- (id)shortDescription;
- (id)dateForKey:(id)a0;
- (char)respondWithError:(id)a0;
- (id)timeZoneForKey:(id)a0;
- (id)errorForKey:(id)a0;
- (id)setForKey:(id)a0;
- (id /* block */)sendableResponseHandlerInternal;
- (id)calendarForKey:(id)a0;
- (id)logEventSession;
- (void)__initWithInternalMessage:(id)a0;
- (id)arrayOfDateComponentsForKey:(id)a0;
- (char)boolForKey:(id)a0 keyPresent:(char *)a1;
- (id)dateComponentsForKey:(id)a0;
- (id)descriptionWithPointer:(char)a0;
- (id)fileHandleForKey:(id)a0;
- (id)initWithInternalMessage:(id)a0;
- (id)initWithName:(id)a0 destination:(id)a1 payload:(id)a2;
- (id)initWithName:(id)a0 identifier:(id)a1 messagePayload:(id)a2 responseHandler:(id /* block */)a3;
- (id)initWithName:(id)a0 qualityOfService:(long long)a1 destination:(id)a2 payload:(id)a3;
- (id)initWithName:(id)a0 qualityOfService:(long long)a1 destination:(id)a2 userInfo:(id)a3 headers:(id)a4 payload:(id)a5;
- (id)nullForKey:(id)a0;
- (id)predicateForKey:(id)a0;
- (char)respondWithOutcomeOf:(id)a0;
- (char)respondWithPayload:(id)a0;
- (char)respondWithPayload:(id)a0 error:(id)a1;
- (char)respondWithSuccess;
- (void)setLogEventSession:(id)a0;
- (void)setSendableResponseHandlerInternal:(id /* block */)a0;
- (id)unarchivedObjectForKey:(id)a0 ofClasses:(id)a1;
- (id)uuidForKey:(id)a0;

@end
