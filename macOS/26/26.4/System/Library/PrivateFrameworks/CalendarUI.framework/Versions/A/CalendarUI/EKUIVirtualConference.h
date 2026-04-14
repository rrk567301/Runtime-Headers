@class EKUIConferenceURLGadget, NSString, LSApplicationRecord, NSImage, EKVirtualConference, NSURL;

@interface EKUIVirtualConference : NSObject {
    EKVirtualConference *_conference;
    NSURL *_url;
    LSApplicationRecord *_appRecord;
    EKUIConferenceURLGadget *_gadget;
    BOOL _attemptedToGetAppRecord;
}

@property (readonly) NSString *displayTitle;
@property (readonly) LSApplicationRecord *appRecord;
@property (readonly) NSImage *icon;
@property BOOL representsEventURL;
@property (readonly) EKVirtualConference *internalEKConference;

- (id)menu;
- (void)execute;
- (id)buttonTitle;
- (void).cxx_destruct;
- (id)subTitle;
- (id)fullURL;
- (void)copyLink:(id)a0;
- (BOOL)needsToPresentConfirmationAlert;
- (id)addLineBreaksToURL:(id)a0;
- (id)initWithEKVirtualConference:(id)a0 forGadget:(id)a1;
- (id)initWithURL:(id)a0 forGadget:(id)a1;
- (id)initWithURL:(id)a0 forGadget:(id)a1 representsEventURL:(BOOL)a2;
- (void)openLink:(id)a0;

@end
