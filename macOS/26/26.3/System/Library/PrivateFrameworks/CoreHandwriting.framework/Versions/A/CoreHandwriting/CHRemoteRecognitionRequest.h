@class NSDictionary, CHDrawing;

@interface CHRemoteRecognitionRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct CGSize { double width; double height; } minimumDrawingSize;
@property (nonatomic) unsigned long long maxRecognitionResultCount;
@property (copy, nonatomic) NSDictionary *options;
@property (copy, nonatomic) CHDrawing *drawing;
@property (nonatomic) BOOL enableCachingIfAvailable;
@property (nonatomic) BOOL hasBeenSubmitted;
@property (nonatomic) long long priority;
@property (readonly, nonatomic) BOOL shouldContributeToStyle;

+ (id)loadFromFile:(id)a0;
+ (Class)classForKeyedUnarchiver;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDrawing:(id)a0 options:(id)a1 priority:(long long)a2;
- (BOOL)isEqualToRemoteRecognitionRequest:(id)a0;
- (id)writeToFileInFolder:(id)a0 basename:(id)a1;

@end
