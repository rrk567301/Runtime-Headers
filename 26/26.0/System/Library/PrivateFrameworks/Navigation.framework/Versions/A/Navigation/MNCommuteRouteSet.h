@class NSArray, NSDate;

@interface MNCommuteRouteSet : NSObject <NSSecureCoding, NSCoding> {
    void /* function */ routes;
    void /* unknown type, empty encoding */ _fetchDate;
    void /* unknown type, empty encoding */ _internalInfo;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSArray *routes;
@property (nonatomic, readonly) NSDate *fetchDate;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWith:(id)a0 fetchDate:(id)a1 internalInfo:(id)a2;

@end
