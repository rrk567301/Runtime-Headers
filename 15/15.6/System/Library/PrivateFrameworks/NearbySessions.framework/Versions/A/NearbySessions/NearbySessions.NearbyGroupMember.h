@class NSString;

@interface NearbySessions.NearbyGroupMember : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ handle;
    void /* unknown type, empty encoding */ tokenID;
}

@property (class, nonatomic, readonly) char supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
