@class NSString, NSArray, AudioAnalyticsRadarComponent;

@interface AudioAnalyticsRadarDraft : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *problemDescription;
@property (retain, nonatomic) NSString *displayReason;
@property (retain, nonatomic) NSArray *attachments;
@property (retain, nonatomic) AudioAnalyticsRadarComponent *component;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 problemDescription:(id)a1 displayReason:(id)a2 attachments:(id)a3 component:(id)a4;
- (BOOL)sendForProcessNamed:(id)a0 completionHandler:(id /* block */)a1;

@end
