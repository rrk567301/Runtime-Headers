@class NSArray, SCRUIElement;

@interface _SCRElementHashStackContainer : NSObject {
    NSArray *tmpChildren;
    unsigned long long tmpChildIndex;
    unsigned long long tmpChildrenIndexOffset;
    unsigned long long childIndex;
    unsigned long long childCount;
    SCRUIElement *uiElement;
    unsigned long long roleHash;
}

- (void).cxx_destruct;

@end
