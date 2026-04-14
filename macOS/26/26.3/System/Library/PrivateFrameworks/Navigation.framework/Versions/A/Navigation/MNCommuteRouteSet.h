@class NSArray, NSDate;

@interface MNCommuteRouteSet : NSObject <NSSecureCoding, NSCoding> {
    void /* function */ routes;
    void /* unknown type, empty encoding */ _fetchDate;
    void /* unknown type, empty encoding */ _internalInfo;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSArray *routes;
@property (nonatomic, readonly) NSDate *fetchDate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWith:(id)a0 fetchDate:(id)a1 internalInfo:(id)a2;

@end
