@class NSArray, NSString;

@interface SMConversation : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSArray *receiverHandles;
@property (readonly, nonatomic) NSArray *receiverPrimaryHandles;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) char isGroup;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)descriptionDictionary;
- (id)initWithReceiverHandles:(id)a0 identifier:(id)a1 displayName:(id)a2;
- (id)outputToDictionary;
- (char)hasEqualPrimaryHandlesAsConversation:(id)a0;
- (char)hasEqualPrimaryHandlesAsSet:(id)a0;

@end
