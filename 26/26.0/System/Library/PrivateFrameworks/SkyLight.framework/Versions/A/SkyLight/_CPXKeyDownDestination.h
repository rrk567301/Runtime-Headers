@protocol CPXHIDEventDeferringResolutionProtocol;

@interface _CPXKeyDownDestination : NSObject {
    unsigned int window;
    unsigned long long regionID;
    id<CPXHIDEventDeferringResolutionProtocol> destination;
}

- (void).cxx_destruct;

@end
