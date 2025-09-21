@class NSArray;

@interface ICURLBagMescalConfiguration : NSObject

@property (nonatomic) char shouldSignBody;
@property (nonatomic) char shouldIncludePath;
@property (copy, nonatomic) NSArray *fields;
@property (copy, nonatomic) NSArray *headers;

- (id)description;
- (void).cxx_destruct;

@end
