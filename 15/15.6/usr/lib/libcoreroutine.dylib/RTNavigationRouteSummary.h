@class RTMapItem;

@interface RTNavigationRouteSummary : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) RTMapItem *originMapItem;
@property (retain, nonatomic) RTMapItem *destinationMapItem;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOriginMapItem:(id)a0 destinationMapItem:(id)a1;

@end
