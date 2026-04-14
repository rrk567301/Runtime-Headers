@class NSString;

@interface _DASActivityGroup : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long maxConcurrent;

+ (id)groupWithName:(id)a0 maxConcurrent:(unsigned long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 maxConcurrent:(unsigned long long)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
