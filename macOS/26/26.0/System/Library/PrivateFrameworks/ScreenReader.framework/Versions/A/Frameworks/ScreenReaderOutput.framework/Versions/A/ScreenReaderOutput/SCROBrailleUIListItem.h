@class NSString;

@interface SCROBrailleUIListItem : NSObject

@property (retain, nonatomic) NSString *brailleLabelCache;
@property (retain, nonatomic) NSString *prepopulatedBraille;
@property (readonly, nonatomic) BOOL shouldPreserveCase;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *brailleLabel;
@property (readonly, nonatomic) NSString *speakableLabel;
@property (retain, nonatomic) NSString *manualCaption;
@property (nonatomic) BOOL isNemeth;
@property (readonly, nonatomic) BOOL isInline;
@property (nonatomic) BOOL updatesAutomatically;
@property (readonly, nonatomic) BOOL shouldTruncateAtPanBoundary;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 brailleLabel:(id)a1 isInline:(BOOL)a2;
- (id)initWithIdentifier:(id)a0 brailleLabel:(id)a1 isInline:(BOOL)a2 shouldTruncateAtPanBoundary:(BOOL)a3;
- (id)initWithIdentifier:(id)a0 label:(id)a1 isInline:(BOOL)a2;
- (id)initWithIdentifier:(id)a0 label:(id)a1 isInline:(BOOL)a2 shouldPreserveCase:(BOOL)a3;
- (id)initWithIdentifier:(id)a0 label:(id)a1 prepopulatedBraille:(id)a2;

@end
