@class NSString;

@interface IKLinkedListLink : NSObject <IKLinkedListLinkProtocol> {
    IKLinkedListLink *_next;
    IKLinkedListLink *_previous;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)next;
- (void)setNext:(id)a0;
- (void)setPrevious:(id)a0;
- (id)previous;
- (void)dealloc;

@end
