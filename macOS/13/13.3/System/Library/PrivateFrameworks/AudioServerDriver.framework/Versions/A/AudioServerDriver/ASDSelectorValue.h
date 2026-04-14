@class NSString;

@interface ASDSelectorValue : NSObject

@property (nonatomic) unsigned int value;
@property (copy, nonatomic) NSString *name;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
