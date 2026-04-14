@class NSData, CalManagedMessage;

@interface CalManagedMessageContents : CalManagedObject

@property (retain, nonatomic) NSData *contentsData;
@property (retain, nonatomic) CalManagedMessage *message;

+ (id)entityName;

@end
