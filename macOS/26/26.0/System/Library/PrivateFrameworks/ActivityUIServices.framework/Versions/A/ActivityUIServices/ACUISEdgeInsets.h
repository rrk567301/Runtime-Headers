@class _TtC18ActivityUIServices18ActivityEdgeInsets;

@interface ACUISEdgeInsets : NSObject <NSCopying, NSSecureCoding> {
    _TtC18ActivityUIServices18ActivityEdgeInsets *_edgeInsets;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double top;
@property (nonatomic) double leading;
@property (nonatomic) double bottom;
@property (nonatomic) double trailing;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_edgeInsets;
- (id)_initWithEdgeInsets:(id)a0;
- (id)initWithTop:(double)a0 leading:(double)a1 bottom:(double)a2 trailing:(double)a3;

@end
