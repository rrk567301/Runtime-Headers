@class NSString;

@interface ICAssetGeneration : NSObject <NSCopying> {
    unsigned long long _hash;
}

@property (readonly, nonatomic) long long number;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *rawValue;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithRawValue:(id)a0;
- (id)initWithNumber:(long long)a0 identifier:(id)a1;
- (id)nextGeneration;

@end
