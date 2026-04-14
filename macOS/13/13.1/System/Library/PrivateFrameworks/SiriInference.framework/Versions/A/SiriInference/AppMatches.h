@class NSArray, NSString;

@interface AppMatches : NSObject <NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ bundleIds;
    void /* unknown type, empty encoding */ signals;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ recommendation;
@property (nonatomic, readonly) NSArray *bundleIds;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
