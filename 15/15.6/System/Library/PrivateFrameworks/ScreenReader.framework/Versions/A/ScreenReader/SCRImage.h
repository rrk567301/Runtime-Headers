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
- (char)isInteractive;
- (char)interactRightWithEvent:(id)a0 request:(id)a1;
- (id)_horizontallyOrderedChildren;
- (id)captionDescriptionContainsUserLabel:(char *)a0 containsAncestorLabel:(char *)a1;
- (long long)groupBehavior;
- (char)interactDownWithEvent:(id)a0 request:(id)a1;
- (char)interactLeftWithEvent:(id)a0 request:(id)a1;
- (char)interactUpWithEvent:(id)a0 request:(id)a1;
- (char)interactWithEvent:(id)a0 request:(id)a1 direction:(long long)a2;
- (id)persistentElementLabelData;
- (id)persistentUserLabel;
- (id)persistentUserLabelIDForData:(id)a0;
- (char)shouldMapElement:(id)a0;

@end
