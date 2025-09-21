@class NSString, NSColor;

@interface MKTransitIncidentViewModel : NSObject

@property (readonly, nonatomic) NSString *symbolName;
@property (retain, nonatomic) NSString *message;
@property (nonatomic, getter=isBlocking) char blocking;
@property (nonatomic) char showImage;
@property (readonly, nonatomic) NSColor *symbolColor;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
