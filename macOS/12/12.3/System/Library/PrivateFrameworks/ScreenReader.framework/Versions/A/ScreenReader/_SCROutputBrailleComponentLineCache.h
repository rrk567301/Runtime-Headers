@class SCRCProcessIdentifier, NSArray;

@interface _SCROutputBrailleComponentLineCache : NSObject {
    SCRCProcessIdentifier *_applicationPSN;
    NSArray *_elementIDs;
}

- (void).cxx_destruct;
- (id)initWithApplicationPSN:(id)a0 elementIDs:(id)a1;
- (id)applicationPSN;
- (id)elementIDs;

@end
