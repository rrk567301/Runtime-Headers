@class NSUUID, NSString, SCContentSharingSessionMetadata, NSArray, SCContentFilter;
@protocol SCContentSharingSessionMetadataProtocol, SCContentSharingSessionProtocol;

@interface SCContentSharingSession : NSObject {
    NSUUID *_uuid;
    SCContentSharingSessionMetadata *_lastMetadata;
}

@property (weak, nonatomic) id<SCContentSharingSessionProtocol, SCContentSharingSessionMetadataProtocol> delegate;
@property (readonly, nonatomic) SCContentSharingSessionMetadata *metadata;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSString *title;
@property (weak, nonatomic) id<SCContentSharingSessionProtocol> delegate;
@property (readonly, copy, nonatomic) SCContentFilter *content;
@property (retain, nonatomic) NSArray *sessionExcludedList;

+ (BOOL)isCurrentModel:(id)a0 equalTo:(id)a1;
+ (BOOL)shouldExcludeSharingApp;

- (void)end;
- (id)initWithTitle:(id)a0;
- (void)updateMetadata:(id)a0;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initFromUUID:(id)a0;
- (BOOL)isEqualToSharingSession:(id)a0;
- (void)showPicker;
- (id)initWithSerialized:(id)a0;
- (void)showPickerForType:(long long)a0;
- (BOOL)shouldShowWindowSharingPillForWindow:(unsigned int)a0;
- (void)updateContent:(id)a0;

@end
