@class NSString, GEOMapItemIdentifier, GEOMapServiceTraits;

@interface _GEOPlacePhotoLookupTicket : GEOAbstractRequestResponseTicket <GEOMapServicePhotoLookupTicket> {
    NSString *_vendorIdentifier;
    GEOMapItemIdentifier *_mapItemIdentifier;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    GEOMapServiceTraits *_traits;
}

@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
