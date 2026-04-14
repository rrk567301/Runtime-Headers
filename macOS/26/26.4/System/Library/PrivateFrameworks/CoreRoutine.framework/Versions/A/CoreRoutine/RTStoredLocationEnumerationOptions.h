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

- (id)initWithDateInterval:(id)a0 horizontalAccuracy:(double)a1 batchSize:(unsigned long long)a2 boundingBoxLocation:(id)a3 type:(int)a4 smoothingRequired:(BOOL)a5 downsampleRequired:(BOOL)a6 smoothingErrorThreshold:(double)a7 ascending:(BOOL)a8;
- (id /* block */)processingBlock;
- (id)initWithDateInterval:(id)a0 horizontalAccuracy:(double)a1 batchSize:(unsigned long long)a2 boundingBoxLocation:(id)a3 type:(int)a4 downsampleRequired:(BOOL)a5;
- (id)initWithDateInterval:(id)a0 horizontalAccuracy:(double)a1 batchSize:(unsigned long long)a2 boundingBoxLocation:(id)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToOptions:(id)a0;
- (id)initWithDateInterval:(id)a0 horizontalAccuracy:(double)a1 batchSize:(unsigned long long)a2;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (Class)enumeratedType;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDateInterval:(id)a0 horizontalAccuracy:(double)a1 batchSize:(unsigned long long)a2 boundingBoxLocation:(id)a3 type:(int)a4;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithDateInterval:(id)a0 horizontalAccuracy:(double)a1 batchSize:(unsigned long long)a2 boundingBoxLocation:(id)a3 type:(int)a4 downsampleRequired:(BOOL)a5 smoothingErrorThreshold:(double)a6;
- (id)initWithDateInterval:(id)a0 horizontalAccuracy:(double)a1 batchSize:(unsigned long long)a2 ascending:(BOOL)a3;

@end
