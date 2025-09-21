@class VFXNode, NSMutableArray;

@interface AVTMemojiBodyController : NSObject {
    NSMutableArray *_bodyJoints;
    NSMutableArray *_leftHandJoints;
    NSMutableArray *_rightHandJoints;
    VFXNode *_bodyRoot;
    VFXNode *_leftHand;
    VFXNode *_rightHand;
    VFXNode *_leftHandModel;
    VFXNode *_rightHandModel;
    struct { void /* unknown type, empty encoding */ vector; } spine0_originalOrientation;
    struct { void /* unknown type, empty encoding */ vector; } r_shoulderNeutralSrcInv;
    struct { void /* unknown type, empty encoding */ vector; } l_shoulderNeutralSrcInv;
    struct { void /* unknown type, empty encoding */ vector; } r_shoulderNeutralDst;
    struct { void /* unknown type, empty encoding */ vector; } l_shoulderNeutralDst;
}

- (void).cxx_destruct;

@end
