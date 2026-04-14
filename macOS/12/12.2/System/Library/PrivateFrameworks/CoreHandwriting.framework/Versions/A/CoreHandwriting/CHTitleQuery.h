@class NSString, NSSet;

@interface CHTitleQuery : CHQuery

@property (readonly, copy, nonatomic) NSString *transcribedTitle;
@property (readonly, copy, nonatomic) NSSet *titleStrokeIdentifiers;

- (void)dealloc;
- (id)debugName;
- (void)q_updateQueryResult;
- (id)initWithRecognitionSession:(id)a0;
- (void)_setTranscribedTitle:(id)a0 strokeIdentifiers:(id)a1;

@end
