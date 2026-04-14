@class NSString, NSSet;

@interface ModeEntry : NSManagedObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSSet *supportedCategories;

+ (id)fetchRequest;

@end
