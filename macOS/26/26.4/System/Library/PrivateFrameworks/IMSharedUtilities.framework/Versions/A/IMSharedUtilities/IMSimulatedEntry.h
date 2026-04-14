@class NSString, NSArray;

@interface IMSimulatedEntry : NSObject <NSSecureCoding, IMSimulatedEntryCreating>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *groupID;
@property (retain, nonatomic) NSString *chatGUID;
@property (retain, nonatomic) NSArray *handles;
@property (retain, nonatomic) NSString *lastAddressedHandle;
@property (nonatomic) unsigned long long condition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)guid;
- (id)createSimulatedEntry;

@end
