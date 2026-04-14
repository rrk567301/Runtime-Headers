@class NSNumber, NSString;

@interface TSCEWarningValue : NSObject <NSCopying>

@property (retain, nonatomic) NSNumber *number;
@property (retain, nonatomic) NSString *string;

+ (id)valueWithNumber:(id)a0;
+ (id)valueWithString:(id)a0;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
