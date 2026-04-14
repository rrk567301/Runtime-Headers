@class NSString;

@interface NearbySessions.NearbyGroupMember : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ handle;
    void /* unknown type, empty encoding */ tokenID;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
