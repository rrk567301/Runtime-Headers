@class CLLocation, NSDateInterval;

@interface RTStoredLocationEnumerationOptions : RTEnumerationOptions <NSCopying>

@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) unsigned long long batchSize;
@property (copy, nonatomic) CLLocation *boundingBoxLocation;
@property (nonatomic) int type;
@property (nonatomic) char smoothingRequired;
@property (nonatomic) char downsampleRequired;
@property (nonatomic) double smoothingErrorThreshold;
@property (nonatomic) char ascending;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id /* block */)processingBlock;
- (Class)enumeratedType;
- (id)initWithDateInterval:(id)a0 horizontalAccuracy:(double)a1 batchSize:(unsigned long long)a2 ascending:(char)a3;
- (id)initWithDateInterval:(id)a0 horizontalAccuracy:(double)a1 batchSize:(unsigned long long)a2 boundingBoxLocation:(id)a3;
- (id)initWithDateInterval:(id)a0 horizontalAccuracy:(double)a1 batchSize:(unsigned long long)a2 boundingBoxLocation:(id)a3 type:(int)a4;
- (id)initWithDateInterval:(id)a0 horizontalAccuracy:(double)a1 batchSize:(unsigned long long)a2 boundingBoxLocation:(id)a3 type:(int)a4 smoothingRequired:(char)a5 downsampleRequired:(char)a6 smoothingErrorThreshold:(double)a7 ascending:(char)a8;
- (id)initWithDateInterval:(id)a0 horizontalAccuracy:(double)a1 batchSize:(unsigned long long)a2;
- (id)initWithDateInterval:(id)a0 horizontalAccuracy:(double)a1 batchSize:(unsigned long long)a2 boundingBoxLocation:(id)a3 type:(int)a4 downsampleRequired:(char)a5;
- (id)initWithDateInterval:(id)a0 horizontalAccuracy:(double)a1 batchSize:(unsigned long long)a2 boundingBoxLocation:(id)a3 type:(int)a4 downsampleRequired:(char)a5 smoothingErrorThreshold:(double)a6;
- (char)isEqualToOptions:(id)a0;

@end
