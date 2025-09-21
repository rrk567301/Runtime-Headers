@class NSString;

@interface SCROIOElement : NSObject <SCROIOElementProtocol, NSCopying> {
    unsigned int _ioObject;
}

@property (nonatomic) int identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (int)transport;
- (id)initWithIOObject:(unsigned int)a0;
- (unsigned int)ioObject;

@end
