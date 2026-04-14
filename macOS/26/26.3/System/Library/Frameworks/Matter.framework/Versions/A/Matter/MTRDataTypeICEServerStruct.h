@class NSArray, NSString, NSNumber;

@interface MTRDataTypeICEServerStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *urls;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *credential;
@property (copy, nonatomic) NSNumber *caid;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
