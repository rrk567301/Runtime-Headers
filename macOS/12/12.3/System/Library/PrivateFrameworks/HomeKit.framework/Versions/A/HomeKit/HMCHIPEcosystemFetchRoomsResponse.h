@class NSArray, HMMatterRoom;

@interface HMCHIPEcosystemFetchRoomsResponse : HMCHIPEcosystemResponse

@property (readonly, copy, nonatomic) NSArray *rooms;
@property (readonly, nonatomic) HMMatterRoom *suggestedRoom;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)messageType;
- (id)attributeDescriptions;
- (id)initWithRooms:(id)a0 suggestion:(id)a1;

@end
