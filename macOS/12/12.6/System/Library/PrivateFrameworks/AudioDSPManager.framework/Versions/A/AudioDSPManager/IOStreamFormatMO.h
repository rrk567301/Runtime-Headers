@class NSSet, NSObject;

@interface IOStreamFormatMO : NSManagedObject

@property (nonatomic) int channelCount;
@property (retain, nonatomic) NSObject *sampleRateRanges;
@property (retain, nonatomic) NSSet *port;
@property (retain, nonatomic) NSSet *semantic;

+ (id)fetchRequest;

@end
