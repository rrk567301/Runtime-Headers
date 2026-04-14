@class CLLocation, NSDateInterval;

@interface RTStoredLocationEnumerationOptions : RTEnumerationOptions <NSCopying>

@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) unsigned long long batchSize;
@property (copy, nonatomic) CLLocation *boundingBoxLocation;
@property (nonatomic) int type;
@property (nonatomic) BOOL smoothingRequired;
@property (nonatomic) BOOL downsampleRequired;
@property (nonatomic) double smoothingErrorThreshold;
@property (nonatomic) BOOL ascending;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqualToOptions:(id)a0;
- (id)initWithDateInterval:(id)a0 horizontalAccuracy:(double)a1 batchSize:(unsigned long long)a2 boundingBoxLocation:(id)a3 type:(int)a4 downsampleRequired:(BOOL)a5 smoothingErrorThreshold:(double)a6;
- (id)description;
- (id)init;
- (id)initWithDateInterval:(id)a0 horizontalAccuracy:(double)a1 batchSize:(unsigned long long)a2 boundingBoxLocation:(id)a3;
- (id)initWithDateInterval:(id)a0 horizontalAccuracy:(double)a1 batchSize:(unsigned long long)a2 boundingBoxLocation:(id)a3 type:(int)a4 smoothingRequired:(BOOL)a5 downsampleRequired:(BOOL)a6 smoothingErrorThreshold:(double)a7 ascending:(BOOL)a8;
- (void).cxx_destruct;
- (id)initWithDateInterval:(id)a0 horizontalAccuracy:(double)a1 batchSize:(unsigned long long)a2 boundingBoxLocation:(id)a3 type:(int)a4 downsampleRequired:(BOOL)a5;
- (id)initWithCoder:(id)a0;
- (id)initWithDateInterval:(id)a0 horizontalAccuracy:(double)a1 batchSize:(unsigned long long)a2 boundingBoxLocation:(id)a3 type:(int)a4;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)enumeratedType;
- (BOOL)isEqual:(id)a0;
- (id)initWithDateInterval:(id)a0 horizontalAccuracy:(double)a1 batchSize:(unsigned long long)a2 ascending:(BOOL)a3;
- (unsigned long long)hash;
- (id)initWithDateInterval:(id)a0 horizontalAccuracy:(double)a1 batchSize:(unsigned long long)a2;
- (id /* block */)processingBlock;
- (void)encodeWithCoder:(id)a0;

@end
