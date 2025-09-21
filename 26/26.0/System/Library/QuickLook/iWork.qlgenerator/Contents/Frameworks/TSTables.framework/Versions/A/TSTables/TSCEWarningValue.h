@class NSNumber, NSString;

@interface TSCEWarningValue : NSObject <NSCopying>

@property (retain, nonatomic) NSNumber *number;
@property (retain, nonatomic) NSString *string;

+ (id)valueWithNumber:(id)a0;
+ (id)valueWithString:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
