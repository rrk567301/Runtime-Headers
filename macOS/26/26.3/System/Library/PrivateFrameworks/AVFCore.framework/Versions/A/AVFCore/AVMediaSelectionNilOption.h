@class NSDictionary, AVWeakReference;

@interface AVMediaSelectionNilOption : AVMediaSelectionOption {
    id _groupID;
    id _groupMediaType;
    NSDictionary *_dictionary;
    AVWeakReference *_weakReferenceToGroup;
}

- (id)_groupMediaType;
- (id)group;
- (BOOL)isPlayable;
- (id)_groupID;
- (id)description;
- (id)dictionary;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)initWithGroup:(id)a0;
- (BOOL)_representsNilSelection;

@end
