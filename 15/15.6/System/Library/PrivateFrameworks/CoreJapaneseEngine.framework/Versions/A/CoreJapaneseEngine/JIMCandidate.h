@class NSString, IMKCandidates;

@interface JIMCandidate : IMKCandidate

@property (retain) NSString *reading;
@property (retain) NSString *surface;
@property (retain) NSString *surfaceToDisplay;
@property (retain) NSString *surfaceForAX;
@property long long originalIndex;
@property (retain) NSString *groupLabel;
@property long long strokeCount;
@property unsigned long long flags;
@property char temporarilyHideNotes;
@property char synthesizedCandidate;
@property (readonly, nonatomic) char isIndented;
@property (weak, nonatomic) IMKCandidates *candidateController;

+ (void)setFont:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)stringIdentifier;
- (char)hasNote;
- (id)uniqueKey;
- (id)descriptionHTML;
- (id)axDescriptionString;
- (id)axValueString;
- (char)hasDefinition;
- (id)_definitionHTML;
- (double)_annotationMarginForMainTextWidth:(double)a0;
- (id)_mainTextAttribute;
- (id)initWithReading:(id)a0 surface:(id)a1;

@end
