@class NSArray, NSString;

@interface CMContinuityCaptureDeviceCapabilities : NSObject <CMContinuityCaptureDictionaryRepresentable>

@property (readonly, nonatomic) long long entityType;
@property (readonly, nonatomic) NSArray *streamFormats;
@property (readonly, nonatomic) NSArray *controls;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithEntityType:(long long)a0 streamFormats:(id)a1 controls:(id)a2;

@end
