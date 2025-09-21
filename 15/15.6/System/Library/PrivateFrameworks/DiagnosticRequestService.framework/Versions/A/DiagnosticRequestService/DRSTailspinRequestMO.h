@class NSNumber;

@interface DRSTailspinRequestMO : DRSRequestMO

@property (nonatomic) char includeOsLog;
@property (nonatomic) char includeOsSignpost;
@property (copy, nonatomic) NSNumber *maxMAT;
@property (copy, nonatomic) NSNumber *minMAT;
@property (nonatomic) char scrubbed;

+ (id)fetchRequest;

@end
