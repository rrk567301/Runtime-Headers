@class NSArray, NSString, NSNumber;

@interface MTRDataTypeICEServerStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *urls;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *credential;
@property (copy, nonatomic) NSNumber *caid;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
