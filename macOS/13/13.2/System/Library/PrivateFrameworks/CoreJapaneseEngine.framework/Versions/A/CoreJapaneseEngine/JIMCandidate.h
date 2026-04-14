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
@property BOOL temporarilyHideNotes;
@property BOOL synthesizedCandidate;
@property (readonly, nonatomic) BOOL isIndented;
@property (weak, nonatomic) IMKCandidates *candidateController;

+ (void)setFont:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)stringIdentifier;
- (BOOL)hasNote;
- (id)uniqueKey;
- (id)descriptionHTML;
- (id)axDescriptionString;
- (id)axValueString;
- (BOOL)hasDefinition;
- (id)initWithReading:(id)a0 surface:(id)a1;
- (id)_mainTextAttribute;
- (double)_annotationMarginForMainTextWidth:(double)a0;
- (id)_definitionHTML;

@end
