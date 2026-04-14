@class NSString;

@interface _TVRCRapportDeviceRecord : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long transports;
@property (readonly, nonatomic) BOOL hasAvailableTransports;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0;
- (void)addTransportForStatusFlag:(unsigned long long)a0;
- (void)removeTransportForStatusFlag:(unsigned long long)a0;
- (void)updateTransportsForStatusFlags:(unsigned long long)a0;
- (unsigned long long)_transportForStatusFlag:(unsigned long long)a0;

@end
