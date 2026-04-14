@class NSString, NSSet;

@interface CHTitleQuery : CHQuery

@property (readonly, copy, nonatomic) NSString *transcribedTitle;
@property (readonly, copy, nonatomic) NSSet *titleStrokeIdentifiers;

- (void).cxx_destruct;
- (id)debugName;
- (void)_setTranscribedTitle:(id)a0 strokeIdentifiers:(id)a1;
- (id)initWithRecognitionSession:(id)a0;
- (void)q_updateQueryResult;

@end
