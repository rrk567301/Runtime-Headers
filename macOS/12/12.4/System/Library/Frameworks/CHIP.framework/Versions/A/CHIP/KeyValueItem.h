@class NSString, NSData;

@interface KeyValueItem : NSManagedObject

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSData *value;

- (id)initWithContext:(id)a0 key:(id)a1 value:(id)a2;

@end
