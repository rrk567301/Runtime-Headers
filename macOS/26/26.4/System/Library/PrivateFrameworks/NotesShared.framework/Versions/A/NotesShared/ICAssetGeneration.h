@class NSString;

@interface ICAssetGeneration : NSObject <NSCopying> {
    unsigned long long _hash;
}

@property (readonly, nonatomic) long long number;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *rawValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithRawValue:(id)a0;
- (id)initWithNumber:(long long)a0 identifier:(id)a1;
- (id)nextGeneration;

@end
