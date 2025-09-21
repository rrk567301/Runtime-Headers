@class NSDictionary, AVWeakReference;

@interface AVMediaSelectionNilOption : AVMediaSelectionOption {
    id _groupID;
    id _groupMediaType;
    NSDictionary *_dictionary;
    AVWeakReference *_weakReferenceToGroup;
}

- (BOOL)isPlayable;
- (void)dealloc;
- (id)_groupID;
- (id)description;
- (id)group;
- (id)dictionary;
- (BOOL)isEqual:(id)a0;
- (id)_groupMediaType;
- (id)initWithGroup:(id)a0;
- (BOOL)_representsNilSelection;

@end
