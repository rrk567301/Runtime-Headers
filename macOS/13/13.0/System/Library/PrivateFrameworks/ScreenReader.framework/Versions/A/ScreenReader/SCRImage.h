@class NSString, NSArray;

@interface SCRImage : SCRMapElement {
    NSString *_localizedPhotoEvaluationString;
}

@property (readonly, copy, nonatomic) NSString *embeddedImageDescription;
@property (retain, nonatomic) NSArray *visionEngineFauxChildren;

- (void).cxx_destruct;
- (id)typeDescription;
- (id)children;
- (unsigned long long)childrenCount;
- (BOOL)isInteractive;
- (long long)groupBehavior;
- (BOOL)interactUpWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactRightWithEvent:(id)a0 request:(id)a1;
- (id)captionDescriptionContainsUserLabel:(BOOL *)a0 containsAncestorLabel:(BOOL *)a1;
- (BOOL)shouldMapElement:(id)a0;
- (id)persistentUserLabel;
- (id)persistentUserLabelIDForData:(id)a0;
- (id)persistentElementLabelData;
- (id)_horizontallyOrderedChildren;
- (BOOL)interactWithEvent:(id)a0 request:(id)a1 direction:(long long)a2;

@end
