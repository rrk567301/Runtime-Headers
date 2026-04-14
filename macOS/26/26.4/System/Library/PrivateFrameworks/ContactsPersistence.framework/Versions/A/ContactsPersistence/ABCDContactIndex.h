@class NSString;

@interface ABCDContactIndex : NSManagedObject

@property (retain, nonatomic) NSString *stringForIndexing;

- (id)description;
- (id)stringForIndexing;

@end
