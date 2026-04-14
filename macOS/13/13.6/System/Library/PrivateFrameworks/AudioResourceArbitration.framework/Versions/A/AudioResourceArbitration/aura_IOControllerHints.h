@class NSNumber, NSArray;
@protocol AuRA_Clock;

@interface AuRA_IOControllerHints : NSObject <NSCopying>

@property (nonatomic) unsigned char ioControllerType;
@property (retain, nonatomic) NSNumber *sampleRate;
@property (retain, nonatomic) NSNumber *bufferSize;
@property (retain, nonatomic) id<AuRA_Clock> clock;
@property (retain, nonatomic) NSArray *inputIOStreamHints;
@property (retain, nonatomic) NSArray *outputIOStreamHints;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
