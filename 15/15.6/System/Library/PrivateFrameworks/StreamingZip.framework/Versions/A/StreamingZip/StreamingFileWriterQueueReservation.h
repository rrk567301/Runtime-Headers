@interface StreamingFileWriterQueueReservation : NSObject

@property (readonly, nonatomic) long long reservedSize;
@property (nonatomic, getter=isValid) char valid;

- (id)initWithReservationSize:(long long)a0;

@end
