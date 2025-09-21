@interface _TtCV18PodcastsFoundation17FeedUpdateRequest21MediaRequestTelemetry : _TtCs12_SwiftObject <PFMediaRequestTelemetryIntervals> {
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ request;
    void /* unknown type, empty encoding */ requestBuildingState;
    void /* unknown type, empty encoding */ requestEncodingState;
    void /* unknown type, empty encoding */ networkState;
    void /* unknown type, empty encoding */ parsingState;
}

- (void)beginNetworking;
- (void)beginBuildingRequest;
- (void)beginParsing;
- (void)beginRequestEncoding;
- (void)endBuildingRequestWithError:(id)a0;
- (void)endNetworkingWithError:(id)a0;
- (void)endParsingWithError:(id)a0;
- (void)endRequestEncodingWithError:(id)a0;

@end
