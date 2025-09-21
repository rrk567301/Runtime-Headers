@class NSNumber, NSString, NUChannelFormat;

@interface NUChannelData : NSObject

@property (readonly, nonatomic) NSNumber *cardinality;
@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) BOOL isNull;
@property (readonly, nonatomic) BOOL isNumber;
@property (readonly, nonatomic) BOOL isBoolean;
@property (readonly, nonatomic) NSString *compactDescription;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NUChannelFormat *format;

+ (id)null;
+ (id)number:(double)a0;
+ (id)adjustment:(id)a0;
+ (id)aggregateDataWithFormat:(id)a0 components:(id)a1 error:(out id *)a2;
+ (id)boolean:(BOOL)a0;
+ (id)composition:(id)a0;
+ (id)rect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0;

- (id)debugDescription;
- (long long)compare:(id)a0;
- (id)init;
- (id)description;
- (id)initWithFormat:(id)a0;
- (void).cxx_destruct;
- (id)subdataAtIndex:(unsigned long long)a0 error:(out id *)a1;
- (id)subdataForChannel:(id)a0 error:(out id *)a1;

@end
